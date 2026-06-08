use std::io;

fn main() {
    let (mut n, mut input_line) : (u32 , String);
    let mut list_of_cities : Vec<String>=Vec::new();

    loop{
        //First input -> number of houses.
        n = int(input());
        if n == 0 { break }

        //Create a vector with all the cases and its data.
        let mut list_of_cases : Vec<Cases>= Vec::new();
        let mut sum_consumption : u64 = 0;
        let mut sum_people : u64 = 0;

        for _i in 0..n {
            //Second input -> A single line with the number of persons and total water consumption.
            input_line = input();
            //Split and put into variables.
            let vector : Vec<&str>= input_line.split(" ").collect();
            let mut persons : u64 = vector[0].trim().parse().unwrap();
            let consumption : u64 = vector[1].trim().parse().unwrap();
            let consumption_avg : f32 = (consumption as f32)/(persons as f32);
            let round_consumption : u8 = consumption_avg.floor() as u8;

            //Count people and sum everybody's consumption, so we can get the average city consumption later.
            sum_consumption = sum_consumption + consumption;
            sum_people = sum_people + persons;

            //If there's a repeated residence average consumption. Sum the qty of people and
            //replace the vector data to display them in the same output.
            let mut replace = false;
            for x in list_of_cases.iter_mut() {
                if x.round_consumption == round_consumption {
                    persons = x.persons + persons;
                    *x = Cases {persons , round_consumption};
                    replace = true;
                }
            }
            if replace == false {list_of_cases.push(Cases { persons, round_consumption });}
        }
        //Sort list of cases to display based on the consumption..
        list_of_cases.sort_by_key(|x| x.round_consumption);

        //Format case output.
        let mut city_output = String::new();

        for x in list_of_cases.iter(){
            let borrowed_string : String = format!("{}-{} ", x.persons, x.round_consumption);
            city_output.push_str(&borrowed_string);
        }

        city_output = city_output.trim().to_string();
        let average_consumption : u64 = sum_consumption * 100 /sum_people;
        let average_consumption : f32 = (average_consumption as f32)/100.0;
        let avg_consumption_str : String = format!("\nConsumo medio: {:.2} m3.", average_consumption);
        city_output.push_str(&avg_consumption_str);

        let city_output = format!("{}", city_output.trim());

        //Send to cities list.
        list_of_cities.push(city_output);
    }
    //Display output.
    for (i, x) in list_of_cities.iter().enumerate() {
        println!("Cidade# {}:\n{}", i+1, x);
        if i != list_of_cities.len() {println!("");
        }
    }
}

struct Cases {
    persons : u64,
    round_consumption : u8,
}

fn input() -> String {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Didn't read the line.");
    let input = input.trim().to_string();
    return input
}

 fn int(number : String) -> u32 {
    let int = number.parse().unwrap();
    int
}

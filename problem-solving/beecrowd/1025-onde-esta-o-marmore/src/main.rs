use std::io;

fn main() {
    let mut cases : Vec<Vec<String>>=vec![];
    let (mut q, mut  n) : (u16, u16);

    loop{
        let (mut index, mut marble_string, mut query_string);
        let mut marble : u16;
        let mut query : u16;
        let mut marbles_vector : Vec<u16>=vec![];
        let mut case_outputs : Vec<String>=vec![];
        let mut output : String;
        let first_input = input();

        if first_input == "0 0" {break}

        let input_vector : Vec<&str>= first_input.split(" ").collect();

        n = input_vector[0].parse().unwrap();
        q = input_vector[1].parse().unwrap();

        //Raju's marbles..
        for _i in 0..n{
            marble_string = input();
            marble = marble_string.parse().unwrap();
            marbles_vector.push(marble);
        }

        //sort.
        marbles_vector.sort();


        //Meena's queries.
        for _i in 0..q {
            query_string = input();
            query = query_string.parse().unwrap();
            index = find_string(&marbles_vector, &query);

            if index == -1{
                output = format!("{} not found", query);
            }else{
                output = format!("{} found at {}", query, index);
            }

            case_outputs.push(output);
        }
        cases.push(case_outputs)
    }

    for (i, case) in cases.iter().enumerate(){
        println!("CASE# {}:", i + 1);
        for output in case.iter(){
            println!("{}", output)
        }
    }
}

fn find_string(a : &Vec<u16>, b : &u16) -> isize {
    let mut index : isize = -1;

    for (i, y) in a.iter().enumerate(){
        if b == y {
            index =  (i + 1) as isize;
            break
        }
    }
    index
}

fn input() -> String {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    input = input.trim().to_string();
    return input
}

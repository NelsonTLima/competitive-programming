use std::io;

fn main() {
    let mut output;
    let mut outputs_vector : Vec<String>=vec![];
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let n : u32 = input.trim().parse().unwrap();
    for _i in 0..n {
        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();
        input = input.trim().to_string();

        output = first_step(input);
        output = second_step(output);
        output = third_step(output);

        outputs_vector.push(output);
    }

    for i in outputs_vector.iter(){
        println!("{}", i);
    }
}

fn first_step(input : String) -> String {
    let mut output = String::new();
    let mut buffer_char : char;

    for i in input.chars(){
        if i.is_ascii_alphabetic() == true{
            buffer_char = char::from((i as u8) + 3);
        }else{
            buffer_char = i;
        }
        output.push(buffer_char);
    }
    return output
}

fn second_step(input : String) -> String {
    let mut output = String::new();

    for i in input.chars().rev(){
        output.push(i);
    }
    return output
}

fn third_step(input : String) -> String {
    let mut output = String::new();
    let mut buffer_char;

    for (i, c) in input.char_indices(){
        if i >= input.len()/2{
            buffer_char = char::from((c as u8) - 1);
        }
        else {
            buffer_char = c;
        }
        output.push(buffer_char);
    }
    return output
}

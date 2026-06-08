use std::io;

fn input_i64() -> i64 {
    let mut buffer = String::new();
    io::stdin()
        .read_line(&mut buffer)
        .expect("Input error.");

    let input : i64 = buffer
        .trim()
        .parse()
        .expect("It's not a number i64.");

    return input;
}

fn main() {
    let num_a = input_i64();
    let num_b = input_i64();
    let prod = num_a * num_b;

    println!("PROD = {}", prod);
}

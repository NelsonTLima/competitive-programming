use std::io;

fn input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Didn't read line.");
    return input;
}

fn parse_f64(input : String) -> f64 {
    let float_number = input
        .trim()
        .parse()
        .unwrap();
    return float_number
}

fn main() {
    let input = input();
    let pi : f64 = 3.14159;
    let raio = parse_f64(input);
    let volume = 4.0/3.0 * pi * raio.powf(3.0);
    println!("VOLUME = {:.3}", volume);
}

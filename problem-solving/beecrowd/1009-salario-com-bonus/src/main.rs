use std::io;

fn input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Didn't read the line.");
    return input;
}

fn parse_f64(variable : String) -> f64 {
    let result : f64 = variable
        .trim()
        .parse()
        .expect("variable is not a number f64.");
    return result;
}

fn main() {
    let _ = input();
    let salary = parse_f64(input());
    let sales = parse_f64(input());
    let total = salary + sales * 0.15;
    println!("TOTAL = R$ {:.2}", total);
}

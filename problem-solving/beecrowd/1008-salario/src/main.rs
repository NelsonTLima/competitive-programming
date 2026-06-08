use std::io;

fn input() -> f64 {
    let mut buffer = String::new();
    io::stdin()
        .read_line(&mut buffer)
        .expect("Didn't read input.");

    let input : f64 = buffer
        .trim()
        .parse()
        .expect("Informed number is not a float f64.");
    return input;
}

fn main() {
    let number = input();
    let hours = input();
    let wage = input();
    let salary = hours * wage;
    println!("NUMBER = {}\nSALARY = U$ {:.2}", number as i64, salary);
}

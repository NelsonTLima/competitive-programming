use std::io;

fn input_f64() -> f64 {
    let mut buffer = String::new();
    io::stdin()
        .read_line(&mut buffer)
        .expect("Input error.");

    let input : f64 = buffer
        .trim()
        .parse()
        .expect("It's not a number f64.");

    return input;
}

fn main() {
    let a = input_f64();
    let b = input_f64();
    let media = (a * 3.5 + b * 7.5)/(3.5 +7.5);
    println!("MEDIA = {:.5}", media);
}

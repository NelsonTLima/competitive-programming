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
    let c = input_f64();
    let media = (a * 2.0 + b * 3.0 + c * 5.0)/(2.0 + 3.0 + 5.0);
    println!("MEDIA = {:.1}", media);
}

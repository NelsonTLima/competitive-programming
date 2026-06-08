use std::io;

fn input_i64() -> i64{
    let mut buffer = String::new();
    io::stdin()
        .read_line(&mut buffer)
        .expect("Didn't read input.");

    let input : i64 = buffer
        .trim()
        .parse()
        .expect("Input is not an number i64.");
    return input;
}

fn main() {
    let a = input_i64();
    let b = input_i64();
    let c = input_i64();
    let d = input_i64();
    let diferenca = a * b - c * d;
    println!("DIFERENCA = {}", diferenca);
}

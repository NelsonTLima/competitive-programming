use std::io;

fn main() {
    let pi : f64 = 3.14159;

    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Didn't get the input.");

    let raio : f64 = input
        .trim()
        .parse()
        .unwrap();

    let area = pi * raio.powf(2.0);

    println!("A={:.4}", area);
}

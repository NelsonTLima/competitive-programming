use std::io;

fn input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Didn't read input.");
    input.to_string()
}

fn main() {
    let inputs = input();
    let p1 : Vec<&str> = inputs.trim().split(" ").collect();
    let inputs = input();
    let p2 : Vec<&str> = inputs.trim().split(" ").collect();

    let x1 : f64 = p1[0].parse().unwrap();
    let y1 : f64 = p1[1].parse().unwrap();
    let x2 : f64 = p2[0].parse().unwrap();
    let y2 : f64 = p2[1].parse().unwrap();

    let distancia = ((x2 - x1).powf(2.0) + (y2 - y1).powf(2.0)).powf(0.5);

    println!("{:.4}", distancia);
}

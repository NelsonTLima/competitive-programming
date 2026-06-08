use std::io;

fn main(){
    let mut buffer = String::new();
    io::stdin().read_line(&mut buffer).unwrap();

    let a : i64 = buffer
        .trim().parse().unwrap();

    buffer = String::new();
    io::stdin().read_line(&mut buffer).unwrap();

    let b : i64 = buffer
        .trim().parse().unwrap();

    let result = a + b;
    println!("X = {}", result)
}

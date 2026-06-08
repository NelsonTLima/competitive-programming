use std::io;

fn main() {
    let mut distance = String::new();
    io::stdin()
        .read_line(&mut distance)
        .expect("Didn't read the line");

    let distance : i64 = distance
        .trim()
        .parse()
        .unwrap();

    let time : i64 = distance * 2;

    println!("{} minutos", time);
}

use std::io;

fn main() {
    let (mut matches_vector, mut mary_score, mut john_score) : (Vec<u8>, usize, usize);
    let mut outputs_vector : Vec<String>=Vec::new();
    let mut n : u32 = input().parse().unwrap();


    while n != 0 {
        matches_vector = input()
            .split(" ")
            .collect::<String>()
            .chars()
            .map(|x| x.to_digit(2).unwrap() as u8)
            .collect();

        mary_score = matches_vector
            .iter()
            .filter(|x| **x == 0).count();

        john_score = matches_vector
            .iter()
            .filter(|x| **x == 1).count();

        n = input().parse().unwrap();

        outputs_vector.push(format!("Mary won {} times and John won {} times", mary_score, john_score))
    }

    for i in outputs_vector {
        println!("{}", i);
    }
}

fn input() -> String {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    input = input.trim().to_string();
    input
}

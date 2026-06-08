use std::io;
use std::io::prelude::*;

fn main() {
    let stdin = io::stdin();
    let mut outputs : Vec<String>=Vec::new();
    for line in stdin.lock().lines() {
        let input_vector : Vec<u32>= line.as_ref().unwrap().split(" ").map(|x| x.parse::<u32>().unwrap()).collect();
        let a : u32 = input_vector[0];
        let b : u32 = input_vector[1];

        let mut sum;
        let mut biding = format!("{:032b}", a);
        let bin_a : Vec<u8> = biding.chars().map(|a| a.to_digit(10).unwrap() as u8).collect();
        biding = format!("{:032b}", b);
        let bin_b : Vec<u8> = biding.chars().map(|a| a.to_digit(10).unwrap() as u8).collect();
        let mut bin_c : Vec<u8> = Vec::new();

        for (i, x) in bin_a.iter().enumerate(){
        sum = x + bin_b[i];
        if sum == 2 { sum = 0 }
        bin_c.push(sum)
        }

        bin_c.reverse();

        let mut result : u32 = 0;
        for (i, x) in bin_c.iter().enumerate(){

            if x != &0{
                let x = *x as u32;
                result = result + x * 2_u32.pow(i as u32);
            }
        }
        outputs.push(format!("{}", result))
    }
    for i in outputs{
        println!("{}", i)
    }
}

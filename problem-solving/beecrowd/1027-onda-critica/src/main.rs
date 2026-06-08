use std::io::{self, BufRead};
use std::collections::HashMap;

fn input() -> String {
    let stdin = io::stdin();
    let mut input = stdin.lock();
    let mut line = String::new();
    let result;

    match input.read_line(&mut line) {
        Ok(0) => {result = "EOF".to_string()}
        Ok(_) => {result = line.trim().to_string()}
        Err(_) => {result = "Error".to_string()}
    }
    return result;
}

fn critical(
    dp : &mut HashMap<(i16, usize), u8>,
    cartesian : &mut Vec<(i16, i16)>,
    i : usize,
    target : i16,
    previous_x : i16,
    direction : i16 ) -> u8 {

    let x = cartesian[i].0;
    let y = cartesian[i].1;
    let mut buffer;

    if i == cartesian.len() -1 {
        return if y == target + direction && x != previous_x {1}  else {0};
    }

    if direction == 0 {
        if !dp.contains_key(&(y + 1, i))  {
            buffer = critical(dp, cartesian, i + 1, y, x, 2) + 1;
            dp.insert((y + 1, i), buffer );
        }

        if !dp.contains_key(&(y - 1, i)) {
            buffer = critical(dp, cartesian, i + 1, y, x, -2) + 1;
            dp.insert((y - 1, i), buffer );
        }

        let current_max = std::cmp::max(dp[&(y + 1, i)], dp[&(y - 1, i)]);
        let following_max = critical(dp, cartesian, i + 1, cartesian[i + 1].1, -1, 0);

        return std::cmp::max(current_max, following_max);
    }

    if y == target + direction && x != previous_x {
        buffer = critical(dp, cartesian, i + 1, y, x, -(direction)) + 1 ;
    }
    else {
        buffer = critical(dp, cartesian, i + 1, target, previous_x, direction);
    }
    return buffer;
}

fn main () {
    let mut first_input : String;
    let mut n : u16;

    let mut dp : HashMap< (i16,usize) , u8>;
    let mut cartesian : Vec<(i16, i16)>;
    let mut coordinates : Vec<i16>;

    let mut first_y : i16;
    let mut result : u8;

    let mut results : Vec<u8> = Vec::new();

    loop {
        //Get first input with the number of coordinates in the following inputs.
        first_input = input();

        //Check end of file.
        if first_input == "EOF" {
            break
        }
        //Convert to interger.
        n = first_input.to_string().parse::<u16>().unwrap();
        //Get the points' coordinates.

        cartesian = Vec::new();

        for _ in 0..n {
            coordinates = input()
                .to_string()
                .split(" ")
                .map(|x| x.parse::<i16>().unwrap())
                .collect();
            cartesian.push((coordinates[0],coordinates[1]));
        }

        cartesian.sort_by_key(|x| x.0);

        dp = HashMap::new();

        first_y = cartesian[0].1;
        result = critical(&mut dp, &mut cartesian, 0, first_y, -1, 0);

        results.push(result);
    }

    for i in results {
        println!("{}", i);
    }
}

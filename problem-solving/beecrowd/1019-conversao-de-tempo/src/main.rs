use std::io;

fn main() {
    let mut n = String::new();
    io::stdin().read_line(&mut n).expect("Didn't read line.");

    let n : u32 = n.trim().parse().unwrap();

    let seconds;
    let (mut hours, mut minutes) = (0,0);

    if n >= 60 {
        minutes = n / 60;
        seconds = n % 60;
    }else{
        seconds = n;
    }
    if minutes >= 60{
        hours = minutes / 60;
        minutes = minutes % 60;
    }
    println!("{}:{}:{}",hours, minutes, seconds);
}

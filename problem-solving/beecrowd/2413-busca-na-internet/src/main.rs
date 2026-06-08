use std::io;

fn main () {
    //Input:
    let mut t : String = String::new();
    io::stdin().read_line(&mut t).unwrap();
    let t : u16 = t.trim().parse().unwrap();
    //Output:
    println!("{}", t * 4);
}

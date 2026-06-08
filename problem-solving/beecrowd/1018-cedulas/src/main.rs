use std::io;

fn main() {
    let cedules_array : [u32; 7]= [100, 50, 20, 10, 5, 2, 1];

    let mut value = String::new();
    io::stdin().read_line(&mut value).expect("Didn't read the line.");
    let mut value : u32 = value.trim().parse().unwrap();

    println!("{}", value);
    for cedule in cedules_array.iter(){
        let quantity : u32 = value / cedule;
        value = value % cedule;
        println!("{} nota(s) de R$ {:.2},00", quantity, *cedule);
    }
}

use std::io;

fn main() {
    //Get the input -> user's age in days.
    let mut days = String::new();
    io::stdin().read_line(&mut days).expect("Didn't read the line.");
    // Parse the input to u32.
    let mut days : u32 = days.trim().parse().unwrap();
    //Define years and months.
    let (mut years, mut months) = (0, 0);

    if days >= 365{
        years = days / 365;
        days = days % 365;
    }

    if days >= 30{
        months = days / 30;
        days = days % 30;
    }

    println!("{} ano(s)", years);
    println!("{} mes(es)", months);
    println!("{} dia(s)", days);
}

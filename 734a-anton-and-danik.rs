use std::io;

fn main() {
    let mut x = String::new();
    io::stdin().read_line(&mut x).expect("Read Error");
    let mut games = String::new();
    io::stdin().read_line(&mut games).expect("Read Error");

    let a = games.chars().filter(|&ch| ch == 'A').count();
    let d = games.chars().filter(|&ch| ch == 'D').count();

    if a > d {
        println!("Anton");
    } else if d > a {
        println!("Danik");
    } else {
        println!("Friendship");
    }
}

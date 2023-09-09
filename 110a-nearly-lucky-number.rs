use std::io;

fn main() {
    let mut buffer = String::new();
    io::stdin().read_line(&mut buffer).expect("Read error");
    let mut lucky_c = 0;
    buffer.chars().for_each(|ch| { 
        if ch == '4' || ch == '7' {
            lucky_c += 1;
        }
    });
    if lucky_c == 4 || lucky_c == 7 || lucky_c == 47 || lucky_c == 744 {
        println!("YES");
    } else {
        println!("NO");
    }
}

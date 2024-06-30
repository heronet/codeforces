use std::io::stdin;

fn main() {
    let mut s = String::new();
    stdin().read_line(&mut s).expect("Error");

    let mut nstr = String::new();

    let mut numstr = String::new();

    for c in s.chars() {
        match nstr.trim() {
            "." => {
                numstr.push('0');
                nstr = String::new();
            }
            "-." => {
                numstr.push('1');
                nstr = String::new();
            }
            "--" => {
                numstr.push('2');
                nstr = String::new();
            }
            _ => (),
        }
        nstr.push(c);
    }
    println!("{numstr}");
}

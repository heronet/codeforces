fn main() {
    let mut chars = String::new();
    std::io::stdin().read_line(&mut chars).unwrap();

    let mut total = 0;

    let mut curr = 'a';

    for ch in chars.trim().chars() {
        let diff = (curr as i32 - ch as i32).abs();

        total += std::cmp::min(26 - diff, diff);

        curr = ch;
    }
    println!("{total}");
}

fn main() {
    let mut count_s = String::new();
    std::io::stdin().read_line(&mut count_s).unwrap();

    let mut arr_s = String::new();
    std::io::stdin().read_line(&mut arr_s).unwrap();

    let arr: Vec<i32> = arr_s
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let mut srej = true;

    let mut srej_score = 0;
    let mut dim_score = 0;

    let mut l: usize = 0;
    let mut r = (arr.len() - 1) as i32;

    while (l as i32) <= r {
        let score: i32;

        if arr[l] > arr[r as usize] {
            score = arr[l];
            l += 1;
        } else {
            score = arr[r as usize];
            r -= 1;
        }

        if srej {
            srej_score += score;
        } else {
            dim_score += score;
        }
        srej = !srej;
    }

    println!("{srej_score} {dim_score}");
}

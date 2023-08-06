#![allow(unused)]
use std::time::Instant;

const N: u32 = 8;

fn calculate_pi(n_terms: u32) -> f64 {
    let mut m1: f64 = 0.0;
    let mut m2: f64  = 0.0;
    let mut m3: f64  = 0.0;
    let mut m4: f64  = 0.0;
    let mut m5: f64  = 0.0;
    let mut pi: f64  = 0.0;
    let mut i: u32 = 0 ;
    let base: u32 = 16 ;

    for _ in 0..n_terms {
        m1 = 1 as f64 / base.pow(i) as f64;
        m2 = f64::from(4) / f64::from((8*i)+1) ;
        m3 = f64::from(2) / f64::from((8*i)+4) ;
        m4 = f64::from(1) / f64::from((8*i)+5) ;
        m5 = f64::from(1) / f64::from((8*i)+6) ;

        print!("itération {}",i+1);
//        println!("m1= {}", m1);
//        println!("m2= {}", m2);
//        println!("m3= {}", m3);
//        println!("m4= {}", m4);
//        println!("m5= {}", m5);

        pi += m1 * ( m2-m3-m4-m5 ) as f64;
        println!("π = {}", pi);
        i += 1 ;
    }
    pi
}

fn main() {
    let start = Instant::now();
    let pi = calculate_pi(N);
    let duration = start.elapsed();
    println!("π = {}", pi);
    println!("Time elapsed: {:.2} seconds!", duration.as_secs_f64());
}

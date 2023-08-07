use num_bigint::BigUint;
use std::convert::TryInto;

fn main() {
    let x: BigUint = 16u32.into();
    // let mut m1 : f64 = 0.0 ;

   for y in num_iter::range_inclusive(BigUint::from(0u64), BigUint::from(10u64)) {
        println!(" {} ", pow(x.clone(),y) );
       //  m1 = 1 as f64 / f64::from(pow(x.clone(),y))  ;
    }
}


fn pow(n: BigUint, exp: BigUint) -> BigUint {
    n.pow(exp.try_into().expect("exponent too large for pow()"))
 }

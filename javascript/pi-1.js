function calculateCircumference(radius) {
  return 2 * Math.PI * radius;
}

function calculate_pi(n_terms) {
    m1 = 0.0;
    m2  = 0.0;
    m3  = 0.0;
    m4  = 0.0;
    m5  = 0.0;
    pi  = 0.0;
    x = 16 ;

    for ( let i = 0 ; i < n_terms; i++){
        m1 = 1 / x**i;
        m2 = 4 / ((8*i)+1) ;
        m3 = 2 / ((8*i)+4) ;
        m4 = 1 / ((8*i)+5) ;
        m5 = 1 / ((8*i)+6) ;
        pi += m1 * ( m2-m3-m4-m5 );
        // print(f"iteration {i} π = {pi:1.20f}")
}
    return pi

}

console.log(" Math.PI = " + Math.PI);
console.log(" PI calculer = " + calculate_pi(15));

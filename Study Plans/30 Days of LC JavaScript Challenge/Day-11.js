// Problem :- 2621. Sleep
// Link :- https://leetcode.com/problems/sleep/?gio_link_id=5Rp2Wmzo

// Solution:
/**
 * @param {number} millis
 */
async function sleep(millis) {
    await new Promise(resolve => setTimeout(resolve, millis));
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */
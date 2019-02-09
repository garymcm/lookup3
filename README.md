# lookup3
A simple C command that wraps the lookup3 hashing algorithm, used in the WSPR mode.

When a station transmits a 6 char grid, or a compound call sign, the full message is sent over 2 tramission cycles (4 minutes, versus 2). WSJT-X calculations a hash for the callsign, which is a number from 0 to 32767. One the second tranmission, it sends this number to allow space for the other data. However, the number of users are such that calls are generating the same hash. This is a collision and can be confusing for users, who think that someone is operating with malicious intent. In general, it is probably better to not send a 6 char grid these days, since the odds of collisions are much greater. 

## Installation and Execution

Compile with:

   `gcc nhash.c hash.c -o hash`  

Excuting:

`hash w1gm`  
` Calculating for call sign: W1GJM`  
` Callsign Hash: 30902`  

## License info

WSJT-X GNU General Public License version 2.0 (GPLv2)  
WSJT-X and this command use lookup3.c, by Bob Jenkins, May 2006. The license is Public Domain.

# Unit 2 Project: Multi-Sensor Counter

## Criteria A: PLanning

### Problem Definition
The client is an old Japanese man who does not know Roman numerals as he has lived in the country-side all his life. He would like a multisensor counter from 0 to 9 that would allow the user to count up and down from a set start.

### Success Criteria
1. The clock should be functioning and display the appropriate hour.
2. The hour displayed should be the Japanese time.
3. The alarm should buzz a sound when it goes off.
4. Japanese Kanji should be displayed.
5. The clock should work continuously.

### Design statement
We will design and make a digital clock for a client who can only read and understand numbers in Japanese Kanji which will be displayed using an 8x8 matrix. An additional component will be designed to accomodate the blind and deaf which will be in the form of a buzzer that will buzz the amount of time it is currently which the client can tell by touching the buzzer and feeling its vibrations. This clock will be constructed using tinkercad and the arduino ide and will take 6 weeks to make and be evaluated according to the criteria set above. 

### Rationale for Proposed Solution
For the counter, we will be using an Arduino as, according to researchgate, it does not need external programming, it is open source, and inexpensive compared to alternative processors such as Teensey 3.6 or the Amica NodeMCU. In addition, since we are making a clock, we need to attach parts which is simple using an Arduino. Furthermore, as different parts will be attached to the Arduino, we need a powerful processor. Compared to the Teensey 3.6 or the Amica NodeMCU, the Arduino is more powerful (opensource.com). We are attaching a 8 by 8 grid of LED lights to the Arduino to display the hour of the day. As we are displaying Kanji, this is the best option. Furthermore, we are attaching a buzzer to play a sound according to what hour of the day it is when a button is pressed. Along with Arduino, we will be using the language C as, according to C-sharp-corner, it is not only powerful but also a very structured language. Furthermore, as C is the only language with the ability to code an Arduino, we cannot use other languages such as Python or JavaScrip (circuito.com).

### Record Of Tasks

| Task No. | Planned Action | Planned Outcome | Time Estimate | Target Completion Date | Criteria |
|:---:|:---:|:---:|:---:|:---:|:---:|
| 1 | Talk about a time system | Decide on time system | 1 Class | End of class, Nov 3rd | C |
| 2 | Create System Diagram | Finish a system diagram  that explains the idea | 20 Minutes | In class, 2021-12-08 | B |
| 3 | Create bitmap of numbers | Bitmap for 1-6 complete | 45 Minutes | Dec 11th | B |
| 4 | Finish Bitmap | Bitmap 7-12 complete | 1 Hour | Dec 12th | B |
| 5 | Create LED Matrix on tinkercad | 8x8 LED Setup | 30 Mins | Dec 12th | B |
| 6 | Create matrix prototype, counting hours | Count Hours in kanji on matrix | 1.5 Hours | Dec 13th | B |
| 7 | Find solution to display image for a extended period of time | Working matrix prototype that can show hours | 1 Hour | Dec 14th | B |
| 8 | Bug still not fixed,  moving on to try to work the piezo buzzer | Connect peizo buzzer,  find a way to coordinate with a led and show am vs pm | 1 Hour | Dec 15th | B |
| 9 | Fix bug with Dr. Ruben's help, get buzzer beeping the correct amount | Matrix is stable, buzzer beeps time when button is pressed | 1 Hour | Dec 15th | B |
| 10 | Ensure all code is commented, comment when necessary | Headers and all comments complete | 15 Mintues | Dec 15th | B |

### Citation
1. Circuito. (2018, March 11). Everything you need to know about arduino code. circuito.io blog. Retrieved December 16, 2021, from 
2. Mohammed, M. A. (2017, November 9). What are the advantages and disadvantages of Arduino ... Research Gate. Retrieved December 11, 2021
3. Talari, S. (n.d.). Top 10 advantages of the C programming language. C# Corner. Retrieved December 11, 2021
4. Red Hat. (n.d.). What is an Arduino? Opensource.com. Retrieved December 16, 2021

## Criteria B: Solution Overview

### System Diagram
![](system_diagram1.png)

### Flow Diagrams

### Test Plan

### Record Of Tasks

| Task No. | Planned Action | Planned Outcome | Time Estimate | Target Completion Date | Criteria |
|:---:|:---:|:---:|:---:|:---:|:---:|
| 1 | Talk about a time system | Decide on time system | 1 Class | End of class, Nov 3rd | C |
| 2 | Create System Diagram | Finish a system diagram  that explains the idea | 20 Minutes | In class, 2021-12-08 | B |
| 3 | Create bitmap of numbers | Bitmap for 1-6 complete | 45 Minutes | Dec 11th | B |
| 4 | Finish Bitmap | Bitmap 7-12 complete | 1 Hour | Dec 12th | B |
| 5 | Create LED Matrix on tinkercad | 8x8 LED Setup | 30 Mins | Dec 12th | B |
| 6 | Create matrix prototype, counting hours | Count Hours in kanji on matrix | 1.5 Hours | Dec 13th | B |
| 7 | Find solution to display image for a extended period of time | Working matrix prototype that can show hours | 1 Hour | Dec 14th | B |
| 8 | Bug still not fixed,  moving on to try to work the piezo buzzer | Connect peizo buzzer,  find a way to coordinate with a led and show am vs pm | 1 Hour | Dec 15th | B |
| 9 | Fix bug with Dr. Ruben's help, get buzzer beeping the correct amount | Matrix is stable, buzzer beeps time when button is pressed | 1 Hour | Dec 15th | B |
| 10 | Ensure all code is commented, comment when necessary | Headers and all comments complete | 15 Mintues | Dec 15th | B |

## Criteria C: Development

### Existing Tools

### Sources

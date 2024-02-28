[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Arduino-Pro-Micro-based-Traffic-Light-Mini)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Arduino-Pro-Micro-based-Traffic-Light-Mini
Traffic lights are lights that control the flow of traffic installed at intersections, pedestrian crossings, and other traffic flow areas. This project was created to show how the traffic light system works. Red indicates that the driver should stop, yellow indicates that the driver should prepare, and green indicates that the driver is allowed to proceed. This project has been implemented and took approximately 1 day. The benefits of making this project are nothing more than education. The result of this project is a prototype traffic light.

<br><br>

## Project Requirements
| Part | Description |
| --- | --- |
| Development Board | Arduino Pro Micro Leonardo ATMEGA32U4 |
| Code Editor | Arduino IDE |
| Driver | USB-Serial CH340 |
| Programming Language | C/C++ |
| Arduino Library | • Arduino (default)<br>• TM1637Display |
| Actuators | Traffic Light Module (x1) |
| Display | TM1637: 4 Digit 7 Segment Module (x1) |
| Other Components | • Micro USB cable - USB type A (x1)<br>• Jumper cable (1 set)<br>• Breadboard (x1)<br>• Adaptor DC 5V (x1) |

<br><br>

## Download & Install
1. Arduino IDE

   <table><tr><td width="810">
         
   ```
   https://www.arduino.cc/en/software
   ```

   </td></tr></table><br>
   
2. USB-Serial CH340

   <table><tr><td width="810">
   
   ```
   https://bit.ly/CH340_Driver
   ```
   
   </td></tr></table>
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Pro-Micro-based-Traffic-Light-Mini/assets/54527592/c5bf817b-0a30-4a30-b108-0f606e9f3227" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Arduino-Pro-Micro-based-Traffic-Light-Mini/assets/54527592/8048c0ab-2508-4afe-b7e8-928055aa40d3" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Pro-Micro-based-Traffic-Light-Mini/assets/54527592/70c19b70-91e2-40dc-b00e-6123191cce23" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Arduino IDE Setup
1. Open the ``` Arduino IDE ``` first, then open the project by clicking ``` File ``` -> ``` Open ``` :

   <table><tr><td width="810">
   
      ``` Traffic_Light.ino ```

   </td></tr></table><br>
   
2. ``` Board Setup ``` in Arduino IDE

   <table>
      <tr><th width="810">

      How to setup the ``` Arduino Pro Micro ``` board
            
      </th></tr>
      <tr><td>
         
      Click ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Micro ```

      </td></tr>
   </table><br>
   
3. ``` Change the Board Speed ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` Tools ``` -> ``` Upload Speed ``` -> ``` 9600 ```

   </td></tr></table><br>
   
4. ``` Install Library ``` in Arduino IDE

   <table><tr><td width="810">
         
      Download all the library zip files. Then paste it in the: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```

   </td></tr></table><br>

5. ``` Port Setup ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```

   </td></tr></table><br>

6. Before uploading the program please click: ``` Verify ```.<br><br>

7. If there is no error in the program code, then please click: ``` Upload ```.<br><br>

8. If there is still a problem when uploading the program, then try checking the ``` driver ``` / ``` port ``` / ``` others ``` section.

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. Configure your device according to the settings above.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
<table>
<tr>
<th width="840" colspan="3">Mini Traffic Light Display</th>
</tr>
<tr>
<td width="280"><img src="https://github.com/devancakra/Arduino-Pro-Micro-based-Traffic-Light-Mini/assets/54527592/44c3171b-4da0-435c-8a56-ecf38779d813" alt="red_condition"></td>
<td width="280"><img src="https://github.com/devancakra/Arduino-Pro-Micro-based-Traffic-Light-Mini/assets/54527592/2c084b83-68f4-4f0c-b08e-70a17ffaf27b" alt="yellow_condition"></td>
<td width="280"><img src="https://github.com/devancakra/Arduino-Pro-Micro-based-Traffic-Light-Mini/assets/54527592/ca0e3dc7-f297-4c41-b09d-266154e2a46c" alt="green_condition"></td>
</tr>
</table>

<br><br>

## Disclaimer
This application has been created by including third-party sources. Third parties here are service providers, whose services are in the form of libraries, frameworks, and others. I thank you very much for the service. It has proven to be very helpful and implementable.

<br><br>

## LICENSE
MIT License - Copyright © 2024 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.

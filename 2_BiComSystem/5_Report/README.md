# Table of content

 --> About the BiCom System 
 1) Intro
 2) Features
 3) SWOT Analysis
 4) 5W's and 1H
 <br>
 
--> Requirements 

 1) High level requirements   
 2) Low level requirements
<br>

--> Architecture 
1) Behavioural Diagrams (HLR & LLR)
2) Structural Diagrams  (HLR & LLR)
<br>

--> Test Plan/Out put
1) High level test cases
2) Low level test cases
<br>

## About
### Intro
BiCom System is designed to remotely know the status of your automobiles, BiCom System operates by broadcasting radio waves on a particular frequency. 
which moniters the status of window, alloem,battery and alarm of thye vehicle and sends the data when user press the related button to print particular information 

### Features
1.It shall display the status of Window on one user click
2.It shall display the status of Alarm on two user clicks
3.It shall display the information of Battery on three clicks
4.it shall display the status of door of the car on four clicks

### SWOT Analysis

### 5W's & 1H

#### Who
The people who want the smart system equipped vehicle

#### What
This system which can send the data of car or a vehicle through wireless medium. the information is being displayed on LED display

#### When 
Whenever the vehicle owner wants to operate the some features of car through remotively

#### Where
In automotive industry to enhance the quality and time saving processes of the vehicles. It can be further deployed to upcoming smart applications like smart homes etc,.
 
#### Why
Remote system can replace traditional systems to make the process easy, simple and time saving

#### How
By deploying the particular system into automotives , the key features can be implemented
<br>
<br>

## Requirements
### High level requirements
**HLR ID** | **Description**
-|-
HLR01 | It shall display the status of window
HLR02 | It shall display the status of alarm
HLR03 | It shall display the information of battery
HLR04 | It shall display the status of door

### Low level requirements

**LLR ID** | **Description** | **HLR ID** |  
-|-|-
LLR1.1 |  As per assigned button press all LED's shall be on | HLR01
LLR1.2 |  As per assigned button press all LED's shall be off | HLR01
LLR2.1 |  As per assigned button press LED's Green,Orange,Red,Blue shall be on at a time | HLR02
LLR2.2 |  As per assigned button press LED's Green,Orange,Red,Blue shall be off at a time | HLR02
LLR3.1 |  As per assigned button press LED's shall be on in clockwise Manner | HLR03
LLR3.2 |  As per assigned button press LED's shall be on in antiClockwise Manner|HLR03
LLR4.1 |  As per assigned button press LED's shall glow in a manner of Green->Orange->Red->Blue| HLR04
LLR4.2 |  As per assigned button press LED's shall glow in a manner of Green->Blue->Red->Orange | HLR04

## Architecture

## Behavioural Diagram
### HLR Diagram
### LLR Diagram

## Structural Diagram
### HLR Diagram
### LLR Diagram
<br>

## Test Plan and Output

### High Level Test Plan

Test ID | Expected Output |Actual output|Status
-|-|-|-
T01 |  display the status of window| Displayed window status| Pass
T02 |  display the status of alarm |Displayed alarm status| Pass
T03 |  display the information of battery | Displayed information of battery| Pass
T04 |  display the status of door | Displayed status of door| Pass

### Low Level test Plan

Test ID | Expected Output |Actual output| Status
-|-|-|-
T01 |  All LED's shall be on | All LED's ON | Pass
T02 |  All LED's shall be off | All Led's OFF | Pass
T03 |  LED's shall be on in clockwise Manner| LED's ON clockwise | Pass
T04 |  LED's shall be on in antiClockwise Manner|LED's ON Anticlock wise | Pass

## Output

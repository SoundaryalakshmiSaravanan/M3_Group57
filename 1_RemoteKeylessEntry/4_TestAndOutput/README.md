# 4. TEST PLAN AND OUTPUT
## HIGH LEVEL TEST PLAN
**TEST ID**| **DESCRIPTION**| **EXPECTED OUTPUT**| **ACTUAL OUTPUT**| **PASS/FAIL**
|-|-|-|-|-|
|T_01| Lock the car door when the button is pressed once| Door locks|Door locks| Pass 
T_02| Unlock the car door when the button is pressed twice| Door unlocks| Door unlocks|Pass
T_03| Alarm activates/deactivates when the button is pressed thrice| Alarm activates/deactivates|Alarm activates/deactivates|Pass
T_04| Approach light when button is pressed four times| Approach light| Approach light|Pass

## LOW LEVEL TEST PLAN
**TEST ID**| **DESCRIPTION**| **EXPECTED OUTPUT**| **ACTUAL OUTPUT**| **PASS/FAIL**
|-|-|-|-|-|
T_01| Door lock status| All LED's ON|All LED's ON|Pass
T_02| Door Unlock status| All LED's OFF|All LED's OFF| Pass
T_03| Door alarm status| All LED's ON in clocwise direction|All LED's ON in clocwise direction| Pass
T_04| Approach light status| All LED's ON in anticlockwise direction|All LED's ON in anticlockwise direction| Pass

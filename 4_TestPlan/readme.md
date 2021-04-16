# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Addition|  25,75| 100 | 100 |Requirement based |
|  H_02       |Subtraction|  75,25| 50 | 50 |Requirement based |
|  H_03       |Subtraction|  25, 75| -50 | -50 |Scenario based  |
|  H_04       |Multiplication|  2, 5| 10 | 10 |Requirement based |
|  H_05       |Division|  100, 5| 20 | 20 |Requirement based |
|  H_06       |Division|  100, 0| INVALID | INVALID |Boundary based |
|  H_07       |HCF| 63,81| 9 | 9 |Requirement based |
|  H_08       |HCF| 63, 0| 63 | 63 |Scenario based |
|  H_09       |Factorial|  5 | 120 | 120 |Requirement based |
|  H_10       |Factorial|  1 | 1 | 1 |Scenario based |
|  H_11       |Factorial|  0 | 1 | 1 |Boundary based |
|  H_12       |Prime|  17 | Prime | Prime |Requirement based |
|  H_13       |Prime|  1 | Not Prime | Not Prime |Boundary based |
|  H_14       |Power|  2, 3 | 8 | 8 |Requirement based |
|  H_15       |Prime|  0 | Neither prime nor composite | Neither prime nor composite |Scenario based |


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Division|  20, 0|INVALID|INVALID|Boundary based |
|  L_02       | HCF|  45, 1| 1|1|Scenario based |
|  L_03       | Power|  20, 2|400|400|Requirement based |
|  L_04       | Power|  20, 0|1|1|Scenario based |
|  L_05       | Power|  0, 4|0|0|Boundary based |
|  L_06       | Sum of Digits |  145|10|10|Requirement based |
|  L_07       | Division|  0, 1|0|0|Scenario based |
|  L_08       | Prime|  -9|INVALID|INVALID|Requirement based |
|  L_09       | Sum of digits|  0|0|0|Boundary based |
|  L_10       | HCF|  2, 4|2|2|Requirement based |
 
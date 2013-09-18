This algorithm is targated for microcontrollers that rely on a feedback loop of proximity sensors that yeild an output of HIGH or LOW TTL logic output. Each sensor is connected to a General Purpose Input-Output pin on a Microcontroller. 

This algorithm checks for consistency in the pattern of output and classifies the pattern as faulty or not faulty. If the pattern is faulty, the algorithm tries to correct the pattern based on the fact that where line is detected, more than one sensor is indicative. 

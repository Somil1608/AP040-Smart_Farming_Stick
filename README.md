# Smart-Farming-Stick
[Smart Farming Stick (SFS)](http://www.innovatefpga.com/cgi-bin/innovate/teams.pl?Id=AP040)
 by using these techniques our system will work as a guide, to assist the farmers by giving information. Farming is about risk calculation: But what if the risk could be calculated and cured beforehand? Analysis can help you with identifying the weakness and strengths of the soil, resulting in more revenue generation and saving an ample amount of time. Automated solutions and technology offer greater accuracy based on more efficient data collection and monitoring. 
<img width="1440" alt="thumb" src="https://user-images.githubusercontent.com/97040159/163724693-0ba32559-d0c1-4433-a7fe-5473bcb0f65b.png">
The DE-10 Nano is a highly versatile board giving complete control over its components and we have tried to build this product by making use of its parallel processing structure. The board also supports Arduino headers to use and can be implemented in the XFCE system via the HPS and FPGA bridge. Overall, the DE-10 Nano has been a very flexible, fast, and a reliable board for this product.

Our product/project consists of sensors like soil moisture and NPK sensor which is used to collect the data from the soil. A Webcam is mounted on the top of the stick for monitoring the pests and detecting diseases. This Webcam is connected with the HPS interface of the board running an AI model and the sensors are interfaced from the FPGA making complete use of the duality of the DE-10 Nano.

For detecting pests and diseases in realtime, the YOLOv5 Nano model was trained with a custom self-prepared dataset and was deployed on the HPS. The inference example is showcased in our video given below.

[Youtube link- Smart Farming Stick (SFS)](https://youtu.be/a4NGR79d7g0)

<img width="1038" alt="Screenshot 2022-04-17 at 10 38 01 PM" src="https://user-images.githubusercontent.com/97040159/163725055-b530e38f-fe91-4e0c-a815-9a7ed899535e.png">

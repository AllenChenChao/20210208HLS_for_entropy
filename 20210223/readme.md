This directory includes files about the HLS codes for SampEn.
axi4_sampen.cpp is the caculation function code.
Usually SampEn has parameters like m,r
here we define m = 2, 
usually r = 0.2, however, we make all data interger with mutitation 100, so in this file, r is 20 in the code, it means it is 0.2

axi4_sampen.hpp is the header file.

axi4_sampen_test.cpp is the test file and we test a short time series to ensure the correctness of the IP

这是一个计算样本熵的HLS IP代码
axi4_sampen.cpp是算法部分
在测试文件中，我们使用一条短时序列验证了该样本熵的正确性。

axi4用来提醒我们可以使用axi4接口接收时间序列，不过最终的样本熵这一指标是通过axilite接口给出的


The usage of this HLS IP is given in an example in vivado and corresding .bit file is produced by vivado tool. The PYNQ with notebook show further usage for this .bit file. (We think the user has obatin the skill for corresding vivado .bit and pynq framwork)
vivado对IP的实例化我们也给出一个案例,并在pynq的python环境中使用（我们假定读者已经具备了相关的开发经验，后续计划上传完整的开发视频，希望可以帮助还未掌握HLS，vivado,pynq开发方法的开发者可以按照视频步骤学会它）。

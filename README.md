# 24 hourly Rainfall data processing
This simple program is prepared for hydrological analysis. Usually, in Bangladesh, precipitation or other weather-related data are found in Bangladesh Meteorological Department (BMD). They provide the data in a row-wise format, more specifically, Years and Months are in the rows, and Days are in the columns. However, for some analyses like analysis on indices with ClimPACT2 package or RClimDex package, the data format needs to be changed into column-wise, more specifically,  Years, Months and Days are in columns. That means each row represents every daily data. 

This simple C++ program will help to process this raw data into this data format for running with R package.

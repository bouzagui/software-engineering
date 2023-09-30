* {box-sizing: border-box;}
*
* body { 
*   margin: 0;
*   font-family: Arial, Helvetica, sans-serif;
*}

.header {
overflow: hidden;
	  background-color: #f7f7f7;
	    padding: 20px 10px;
}

.header a {
	float: left;
	   color: black;
	    text-align: center;
	      padding: 12px;
	         text-decoration: none;
		   font-size: 18px; 
		     line-height: 25px;
		       border-radius: 4px;
}

.header a.logo {
	  font-size: 25px;
	    font-weight: bold;
}

.header a:hover {
	  background-color: #072357;
	    color: white;
}

.header a.active {
	  background-color: #072357 ;
	    color: #fff;
}

.header-right {
	  float: right;
	   margin: 30px 80px ;

}

@media screen and (max-width: 500px) {
	  .header a {
	    float: none;
	      display: block;
	       text-align: left;
	}
	    
	   .header-right {
	      float: none;
	}
}

video{
	width: 800px;
	 border-radius: 10px;
	  margin: 45px 0px;
}

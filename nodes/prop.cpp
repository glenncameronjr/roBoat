#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include <cmath>
#include <std_msgs/Float64.h>
#include "geometry_msgs/TransformStamped.h"
#include <geometry_msgs/Pose.h>

class SubscribeAndPublish 
{
	public:
	SubscribeAndPublish()
	{
		//Publications
		//controllers for rotating motor and spinning prop
		pub2_=n1_.advertise<std_msgs::Float64>("/boat/prop_shaft_controller/command",1000);
		pub3_=n1_.advertise<std_msgs::Float64>("/boat/prop_piece_controller/command",1000);

		
		//Subscriptions
		sub1_= n1_.subscribe("/boat/motor_controller/command", 1000, &SubscribeAndPublish::callback, this);
	}
	
	void callback(const std_msgs::Float64& test)
	{
		std_msgs::Float64 pubdata1;

		pubdata1.data=test.data;
		
		pub2_.publish(pubdata1);
		pub3_.publish(pubdata1);
	
		
	}
	private:
	ros::NodeHandle n1_;
	ros::Subscriber sub1_;
	ros::Publisher pub2_;
	ros::Publisher pub3_;
	
	
};

int main(int argc, char **argv)
{
	ros::init(argc, argv, "prop");
	SubscribeAndPublish object;
	ros::spin();
	
	return 0;
}

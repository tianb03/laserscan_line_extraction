#ifndef _FSTRUCH_H_
#define _FSTRUCH_H_

#include <vector>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>

//点信息

struct POINT
{
  double x;
  double y;
};

struct CSdata
{
  std::vector<unsigned int> index;  //索引值
  std::vector<double> bearings;     //角度
  std::vector<double> cos_value;    //余弦
  std::vector<double> sin_value;    //正弦
};

struct Rangedata
{
  std::vector<double> ranges;  // role数值
  std::vector<double> xs;      // x坐标
  std::vector<double> ys;      // y坐标
};

//参数，从launch文件中读入
struct Params
{
  double angle_increment;         //角度增量
  double angle_start;             //初始角度
  double least_thresh;            //正交拟合阈值
  double min_line_length;         //拟合线段最短距离
  double predict_distance;        //真实点与与预测点之间的距离阈值
  unsigned int min_line_points;   //一条线段包含的激光点个数
  unsigned int seed_line_points;  //种子线段包含的激光点个数
};

struct word_params
{
  double _role;
  double _theta_one;
  double _theta_two;
};

struct signal_params
{
  double distance_signal;
};

//直线段信息结构体
struct line
{
  double a;  //直线参数
  double b;
  double c;
  int left;  //直线范围
  int right;
  POINT p1;
  POINT p2;
  bool inte[2];
};

//直线方程式结构体
struct least
{
  double a;
  double b;
  double c;
};

//}

struct PoinT
{
  double role;
  double theta;
  double m_x;
  double m_y;
  double distance;
  double m_gradient;
  bool flag;
};

struct gline
{
  // first point
  double x1;
  double y1;
  // end point
  double x2;
  double y2;
};

struct Signal
{
  double _angle1_radian;
  double _angle2_radian;
  double _angle1_degree;
  double _angle2_degree;
  double _role;
};

struct featurepoint
{
  POINT _point;
  double _angle;
};

struct keyword
{
  int _index_role;
  int _index_theta_one;
  int _index_theta_two;
  std::vector<int> _frame_index;
};

#endif

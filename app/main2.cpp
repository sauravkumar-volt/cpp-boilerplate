/** @file main2.cpp
 *  @copyright Copyright 2018
 *  @brief
 *  Shows constructor, destructor, attributes and fucntion implementation of
 *  class PidController.
 *  @author Saurav Kumar
 *  @author Hrikesh Tawade
 */
#include <iostream>
#include "../include/PIDController.h"

using std::cout;
using std::endl;
using std::cin;

/// constructor for class PIDController.
PIDController::PIDController() {
kp_ = 0.0;
ki_ = 0.0;
kd_ = 0.0;
}
/// destructor for class PIDController.
PIDController::~PIDController() {
}

/**
 * @brief computes new velocity based on pid algorithm
 * @param targetSetpoint the velocity to be reached
 * @param actualVelocity the current velocity of system
 * @param iteration number of turns the controller runs
 * @return new velocity
 */
//!< a member function which returns constant 10.0
double PIDController::compute(double targetSetpoint,
                              double actualVelocity, int iteration) {
  return 10.0;  //!< stub implementation
  }

  /**
    *
    * @param kp_ proportional gain
    * @param ki_ integral gain
    * @param kd_ differential gain
    * @return void
    */
//!< a member function.
  void PIDController::setParamters(double kp_, double ki_, double kd_) {
     this->kp_ = kp_;
     this->ki_ = ki_;
     this->kd_ = kd_;
  }
  /**
   * @brief tells proportional gain of PID controller
   * @return proportional gain kp_
   */
double PIDController::getKp() {
  return this->kp_;
}
/**
   * @brief tells differential gain of PID controller
   * @return differential gain kd_
   */
double PIDController::getKd() {
  return this->kd_;
}
/**
   * @brief tells intergal gain of PID controller
   * @return integral gain ki_
   */
double PIDController::getKi() {
  return this->ki_;
}

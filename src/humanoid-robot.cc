//
// Copyright (c) 2013, 2014 CNRS
// Author: Florent Lamiraux
//
//
// This file is part of hpp-model
// hpp-model is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// hpp-model is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Lesser Public License for more details.  You should have
// received a copy of the GNU Lesser General Public License along with
// hpp-model  If not, see
// <http://www.gnu.org/licenses/>.

#include <hpp/model/humanoid-robot.hh>
#include <hpp/model/object-factory.hh>

namespace hpp {
  namespace model {

    HumanoidRobot::HumanoidRobot (const std::string& name)
      : Device (name), weakPtr_ ()
    {
    }

    // ========================================================================

    HumanoidRobot::~HumanoidRobot ()
    {
    }

    // ========================================================================

    HumanoidRobotPtr_t HumanoidRobot::create (const std::string& name)
    {
      HumanoidRobot *hppHumanoidRobot = new HumanoidRobot (name);
      HumanoidRobotPtr_t hppHumanoidRobotPtr_t (hppHumanoidRobot);

      hppHumanoidRobot->init (hppHumanoidRobotPtr_t);
      return hppHumanoidRobotPtr_t;
    }

    // ========================================================================

    void HumanoidRobot::init(const HumanoidRobotWkPtr_t& weakPtr)
    {
      Device::init (weakPtr);
      weakPtr_ = weakPtr;
    }

      /// \brief Get Joint corresponding to the waist.
      JointPtr_t HumanoidRobot::waist() const
      {
	return waist_;
      }

      /// Set waist joint
      void HumanoidRobot::waist (const JointPtr_t& joint)
      {
	waist_ = joint;
      }

      /// \brief Get Joint corresponding to the chest.
      JointPtr_t HumanoidRobot::chest() const
      {
	return chest_;
      }

      /// Set chest joint
      void HumanoidRobot::chest (const JointPtr_t& joint)
      {
	chest_ = joint;
      }

      /// \brief Get Joint corresponding to the left wrist.
      JointPtr_t HumanoidRobot::leftWrist() const
      {
	return leftWrist_;
      }

      /// Set left wrist
      void HumanoidRobot::leftWrist (const JointPtr_t& joint)
      {
	leftWrist_ = joint;
      }

      /// \brief Get Joint corresponding to the right wrist.
      JointPtr_t HumanoidRobot::rightWrist() const
      {
	return rightWrist_;
      }

      /// Set right wrist
      void HumanoidRobot::rightWrist (const JointPtr_t& joint)
      {
	rightWrist_ = joint;
      }

      /// \brief Get Joint corresponding to the left ankle.
      JointPtr_t HumanoidRobot::leftAnkle() const
      {
	return leftAnkle_;
      }

      /// Set letf ankle
      void HumanoidRobot::leftAnkle (const JointPtr_t& joint)
      {
	leftAnkle_ = joint;
      }

      /// \brief Get Joint corresponding to the right ankle.
      JointPtr_t HumanoidRobot::rightAnkle() const
      {
	return rightAnkle_;
      }

      /// Set right ankle
      void HumanoidRobot::rightAnkle (const JointPtr_t& joint)
      {
	rightAnkle_ = joint;
      }

      /// \brief Get gaze joint
      JointPtr_t HumanoidRobot::gazeJoint() const
      {
	return gazeJoint_;
      }

      /// Set gaze joint
      void HumanoidRobot::gazeJoint (const JointPtr_t& joint)
      {
	gazeJoint_ = joint;
      }

  } // namespace model
} // namespace hpp

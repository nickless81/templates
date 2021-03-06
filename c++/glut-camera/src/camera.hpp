
#ifndef __camera_camera_hpp_

#define __camera_camera_hpp_

#include <GL/glut.h>
#include <glm/glm.hpp>

#include <iostream>

class camera {
   private:
      glm::vec3 viewDir,
                rightVector,
                upVector,
                position;

      float rotatedX,
            rotatedY,
            rotatedZ;

   public:
      camera(void);

      // positions the camera by transforming the scene
      void place(void);

      void move(const glm::vec3 &dir);
      void moveTo(const glm::vec3 &pos);

      // x rotation
      void pitch(const float angle);
      void pitchTo(const float angle);

      // y rotation
      void yaw(const float angle);
      void yawTo(const float angle);

      // z rotation
      void roll(const float angle);
      void rollTo(const float angle);

      // z movement
      void advance(const float distance);
      // y movement
      void ascend(const float distance);
      // x movement
      void strafe(const float distance);

      const glm::vec3& pos(void) const { return position; }

      void print(void);

   private:
      void pitchInternal(void);
      void yawInternal(void);
      void rollInternal(void);

      static const glm::vec3 viewInitial;
      static const glm::vec3 upInitial;
      static const glm::vec3 rightInitial;
};

#endif //__camera_camera_hpp_

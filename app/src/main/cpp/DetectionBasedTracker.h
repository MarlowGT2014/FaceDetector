#include <jni.h>
/* Header for class org_opencv_samples_fd_DetectionBasedTracker */

#ifndef _Included_com_example_android_facedetector_detectionbasedtracker_h
#define _Included_com_example_android_facedetector_detectionbasedtracker_h
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_opencv_samples_fd_DetectionBasedTracker
 * Method:    nativeCreateObject
 * Signature: (Ljava/lang/String;F)J
 */
JNIEXPORT jlong JNICALL Java_com_example_android_facedetector_DetectionBasedTracker_nativeCreateObject
        (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_opencv_samples_fd_DetectionBasedTracker
 * Method:    nativeDestroyObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_example_android_facedetector_DetectionBasedTracker_nativeDestroyObject
        (JNIEnv *, jclass, jlong);

/*
 * Class:     org_opencv_samples_fd_DetectionBasedTracker
 * Method:    nativeStart
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_example_android_facedetector_DetectionBasedTracker_nativeStart
        (JNIEnv *, jclass, jlong);

/*
 * Class:     org_opencv_samples_fd_DetectionBasedTracker
 * Method:    nativeStop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_example_android_facedetector_DetectionBasedTracker_nativeStop
        (JNIEnv *, jclass, jlong);

/*
 * Class:     org_opencv_samples_fd_DetectionBasedTracker
 * Method:    nativeSetFaceSize
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_example_android_facedetector_DetectionBasedTracker_nativeSetFaceSize
        (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_opencv_samples_fd_DetectionBasedTracker
 * Method:    nativeDetect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_example_android_facedetector_DetectionBasedTracker_nativeDetect
        (JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
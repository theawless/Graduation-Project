/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Speechy */

#ifndef _Included_Speechy
#define _Included_Speechy
#ifdef __cplusplus
extern "C" {
#endif
#undef Speechy_FOCUS_TRAVERSABLE_UNKNOWN
#define Speechy_FOCUS_TRAVERSABLE_UNKNOWN 0L
#undef Speechy_FOCUS_TRAVERSABLE_DEFAULT
#define Speechy_FOCUS_TRAVERSABLE_DEFAULT 1L
#undef Speechy_FOCUS_TRAVERSABLE_SET
#define Speechy_FOCUS_TRAVERSABLE_SET 2L
#undef Speechy_TOP_ALIGNMENT
#define Speechy_TOP_ALIGNMENT 0.0f
#undef Speechy_CENTER_ALIGNMENT
#define Speechy_CENTER_ALIGNMENT 0.5f
#undef Speechy_BOTTOM_ALIGNMENT
#define Speechy_BOTTOM_ALIGNMENT 1.0f
#undef Speechy_LEFT_ALIGNMENT
#define Speechy_LEFT_ALIGNMENT 0.0f
#undef Speechy_RIGHT_ALIGNMENT
#define Speechy_RIGHT_ALIGNMENT 1.0f
#undef Speechy_serialVersionUID
#define Speechy_serialVersionUID -7644114512714619750i64
#undef Speechy_serialVersionUID
#define Speechy_serialVersionUID 4613797578919906343i64
#undef Speechy_INCLUDE_SELF
#define Speechy_INCLUDE_SELF 1L
#undef Speechy_SEARCH_HEAVYWEIGHTS
#define Speechy_SEARCH_HEAVYWEIGHTS 1L
#undef Speechy_OPENED
#define Speechy_OPENED 1L
#undef Speechy_serialVersionUID
#define Speechy_serialVersionUID 4497834738069338734i64
#undef Speechy_DEFAULT_CURSOR
#define Speechy_DEFAULT_CURSOR 0L
#undef Speechy_CROSSHAIR_CURSOR
#define Speechy_CROSSHAIR_CURSOR 1L
#undef Speechy_TEXT_CURSOR
#define Speechy_TEXT_CURSOR 2L
#undef Speechy_WAIT_CURSOR
#define Speechy_WAIT_CURSOR 3L
#undef Speechy_SW_RESIZE_CURSOR
#define Speechy_SW_RESIZE_CURSOR 4L
#undef Speechy_SE_RESIZE_CURSOR
#define Speechy_SE_RESIZE_CURSOR 5L
#undef Speechy_NW_RESIZE_CURSOR
#define Speechy_NW_RESIZE_CURSOR 6L
#undef Speechy_NE_RESIZE_CURSOR
#define Speechy_NE_RESIZE_CURSOR 7L
#undef Speechy_N_RESIZE_CURSOR
#define Speechy_N_RESIZE_CURSOR 8L
#undef Speechy_S_RESIZE_CURSOR
#define Speechy_S_RESIZE_CURSOR 9L
#undef Speechy_W_RESIZE_CURSOR
#define Speechy_W_RESIZE_CURSOR 10L
#undef Speechy_E_RESIZE_CURSOR
#define Speechy_E_RESIZE_CURSOR 11L
#undef Speechy_HAND_CURSOR
#define Speechy_HAND_CURSOR 12L
#undef Speechy_MOVE_CURSOR
#define Speechy_MOVE_CURSOR 13L
#undef Speechy_NORMAL
#define Speechy_NORMAL 0L
#undef Speechy_ICONIFIED
#define Speechy_ICONIFIED 1L
#undef Speechy_MAXIMIZED_HORIZ
#define Speechy_MAXIMIZED_HORIZ 2L
#undef Speechy_MAXIMIZED_VERT
#define Speechy_MAXIMIZED_VERT 4L
#undef Speechy_MAXIMIZED_BOTH
#define Speechy_MAXIMIZED_BOTH 6L
#undef Speechy_serialVersionUID
#define Speechy_serialVersionUID 2673458971256075116i64
#undef Speechy_DEFAULT_DURATION
#define Speechy_DEFAULT_DURATION 1.25
/*
 * Class:     Speechy
 * Method:    setup
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_Speechy_setup
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Speechy
 * Method:    wordTrain
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_Speechy_wordTrain
  (JNIEnv *, jobject);

/*
 * Class:     Speechy
 * Method:    wordTest
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Speechy_wordTest
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Speechy
 * Method:    sentenceTrain
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_Speechy_sentenceTrain
  (JNIEnv *, jobject);

/*
 * Class:     Speechy
 * Method:    sentenceTest
 * Signature: (Ljava/lang/String;Z)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Speechy_sentenceTest
  (JNIEnv *, jobject, jstring, jboolean);

#ifdef __cplusplus
}
#endif
#endif

package com.gobbledygook.theawless.speechy.utils

import android.media.AudioFormat

object AudioConstants {
    const val SAMPLE_RATE = 16000
    const val OUT_CHANNEL = AudioFormat.CHANNEL_OUT_MONO
    const val IN_CHANNEL = AudioFormat.CHANNEL_IN_MONO
    const val ENCODING = AudioFormat.ENCODING_PCM_16BIT
    const val MAX_DURATION = 3 // In seconds.
    const val MAX_BYTES = AudioConstants.SAMPLE_RATE * MAX_DURATION * 2 // 16 bit encoding.
}

object SpeechConstants {
    const val N_UTTERANCES = 5
    val WORDS = arrayOf("zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine")
}

object UtilsConstants {
    const val FILENAME = "recording"
}
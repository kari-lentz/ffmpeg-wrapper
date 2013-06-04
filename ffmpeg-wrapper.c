#include <string.h>

#include <libavcodec/avcodec.h>
#include <libavutil/audioconvert.h>
#include <libavutil/common.h>
#include <libavutil/imgutils.h>
#include <libavutil/mathematics.h>
#include <libavutil/samplefmt.h>
#include <libavutil/opt.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libavutil/pixfmt.h>
#include <libswresample/swresample.h>

#include "ffmpeg-wrapper.h"

int my_test(const char* msg)
{
    return strlen(msg);
}

uint64_t codec_context_get_channel_layout(AVCodecContext* cc)
{
    return cc->channel_layout;
}

void codec_context_set_channel_layout(AVCodecContext* cc, uint64_t channel_layout)
{
     cc->channel_layout = channel_layout;
}

int codec_context_get_channels(AVCodecContext* cc)
{
    return cc->channels;
}

void codec_context_set_channels(AVCodecContext* cc, int channels)
{
     cc->channels = channels;
}

enum AVSampleFormat codec_context_get_sample_fmt(AVCodecContext* cc)
{
    return cc->sample_fmt;
}

void codec_context_set_sample_fmt(AVCodecContext* cc, enum AVSampleFormat sample_fmt)
{
     cc->sample_fmt = sample_fmt;
}

int codec_context_get_sample_rate(AVCodecContext* cc)
{
    return cc->sample_rate;
}

void codec_context_set_sample_rate(AVCodecContext* cc, int sample_rate)
{
     cc->sample_rate = sample_rate;
}

int codec_context_get_bit_rate(AVCodecContext* cc)
{
    return cc->bit_rate;
}

void codec_context_set_bit_rate(AVCodecContext* cc, int bit_rate)
{
     cc->bit_rate = bit_rate;
}

AVOutputFormat* format_context_get_oformat(AVFormatContext* format_context)
{
    format_context->oformat;
}

void format_context_set_oformat(AVFormatContext* format_context, AVOutputFormat* output_format)
{
    format_context->oformat = output_format;
}

enum AVCodecID output_format_get_audio_codec(AVOutputFormat* oc)
{
    return oc->audio_codec;
}

void output_format_set_audio_codec(AVOutputFormat* oc, enum AVCodecID codec_id)
{
     oc->audio_codec = codec_id;
}

enum AVCodecID output_format_get_video_codec(AVOutputFormat* oc)
{
    return oc->video_codec;
}

void output_format_set_video_codec(AVOutputFormat* oc, enum AVCodecID codec_id)
{
     oc->video_codec = codec_id;
}


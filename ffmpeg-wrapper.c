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

int codec_context_get_flags(AVCodecContext* cc)
{
    return cc->flags;
}

void codec_context_set_flags(AVCodecContext* cc, int flags)
{
     cc->flags = flags;
}

uint64_t frame_get_channel_layout(AVFrame* cc)
{
    return cc->channel_layout;
}

void frame_set_channel_layout(AVFrame* frame, uint64_t channel_layout)
{
     frame->channel_layout = channel_layout;
}

int frame_get_channels(AVFrame* frame)
{
    return frame->channels;
}

void frame_set_channels(AVFrame* frame, int channels)
{
     frame->channels = channels;
}

int frame_get_sample_fmt(AVFrame* frame)
{
    return frame->format;
}

void frame_set_format(AVFrame* frame, int format)
{
     frame->format = format;
}

int frame_get_sample_rate(AVFrame* frame)
{
    return frame->sample_rate;
}

void frame_set_sample_rate(AVFrame* frame, int sample_rate)
{
     frame->sample_rate = sample_rate;
}

AVOutputFormat* format_context_get_oformat(AVFormatContext* format_context)
{
    return format_context->oformat;
}

void format_context_set_oformat(AVFormatContext* format_context, AVOutputFormat* output_format)
{
    format_context->oformat = output_format;
}

AVIOContext* format_context_get_pb(AVFormatContext* format_context)
{
    return format_context->pb;
}

void format_context_set_pb(AVFormatContext* format_context, AVIOContext* io_ctx)
{
    format_context->pb = io_ctx;
}

int format_context_get_flags(AVFormatContext* format_context)
{
    return format_context->flags;
}

void format_context_set_flags(AVFormatContext* format_context, int flags)
{
    format_context->flags = flags;
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

int output_format_get_flags(AVFormatContext* output_format)
{
    return output_format->flags;
}

void output_format_set_flags(AVFormatContext* output_format, int flags)
{
    output_format->flags = flags;
}

AVCodecContext* stream_get_codec(AVStream* stream)
{
    return stream->codec;
}

void stream_set_codec(AVStream* stream, AVCodecContext* codec)
{
    stream->codec = codec;
}

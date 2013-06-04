int my_test(const char* msg);

uint64_t codec_context_get_channel_layout(AVCodecContext* cc);
void codec_context_set_channel_layout(AVCodecContext* cc, uint64_t channel_layout);

int codec_context_get_channels(AVCodecContext* cc);
void codec_context_set_channels(AVCodecContext* cc, int channels);

enum AVSampleFormat codec_context_get_sample_fmt(AVCodecContext* cc);
void codec_context_set_sample_fmt(AVCodecContext* cc, enum AVSampleFormat sample_fmt);

int codec_context_get_sample_rate(AVCodecContext* cc);
void codec_context_set_sample_rate(AVCodecContext* cc, int sample_rate);

int codec_context_get_bit_rate(AVCodecContext* cc);
void codec_context_set_bit_rate(AVCodecContext* cc, int bit_rate);

AVOutputFormat* format_context_get_oformat(AVFormatContext* format_context);
void format_context_set_oformat(AVFormatContext* format_context, AVOutputFormat* output_format);

enum AVCodecID output_format_get_audio_codec(AVOutputFormat* oc);
void output_format_set_audio_codec(AVOutputFormat* oc, enum AVCodecID codec_id);

enum AVCodecID output_format_get_video_codec(AVOutputFormat* oc);
void output_format_set_video_codec(AVOutputFormat* oc, enum AVCodecID codec_id);

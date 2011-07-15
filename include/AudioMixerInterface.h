#ifndef _AUDIO_MIXER_INTERFACE_H_
#define _AUDIO_MIXER_INTERFACE_H_

#include <string.h>

#include "AudioChannelInterface.h"

class AudioMixerInterface
	: public virtual AudioChannelInterface
{
public:
	virtual void addChannel(AudioChannelInterface *channel) = 0;
	virtual void removeChannel(AudioChannelInterface *channel) = 0;
	virtual size_t numChannels() const = 0;
};

#endif

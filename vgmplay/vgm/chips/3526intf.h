#pragma once

/*typedef struct _ym3526_interface ym3526_interface;
struct _ym3526_interface
{
	//void (*handler)(const device_config *device, int linestate);
	void (*handler)(int linestate);
};*/

/*READ8_DEVICE_HANDLER( ym3526_r );
WRITE8_DEVICE_HANDLER( ym3526_w );

READ8_DEVICE_HANDLER( ym3526_status_port_r );
READ8_DEVICE_HANDLER( ym3526_read_port_r );
WRITE8_DEVICE_HANDLER( ym3526_control_port_w );
WRITE8_DEVICE_HANDLER( ym3526_write_port_w );

DEVICE_GET_INFO( ym3526 );
#define SOUND_YM3526 DEVICE_GET_INFO_NAME( ym3526 )*/
void ym3526_stream_update(UINT8 ChipID, stream_sample_t **outputs, int samples);
int device_start_ym3526(UINT8 ChipID, int clock);
void device_stop_ym3526(UINT8 ChipID);
void device_reset_ym3526(UINT8 ChipID);

UINT8 ym3526_r(UINT8 ChipID, offs_t offset);
void ym3526_w(UINT8 ChipID, offs_t offset, UINT8 data);

UINT8 ym3526_status_port_r(UINT8 ChipID, offs_t offset);
UINT8 ym3526_read_port_r(UINT8 ChipID, offs_t offset);
void ym3526_control_port_w(UINT8 ChipID, offs_t offset, UINT8 data);
void ym3526_write_port_w(UINT8 ChipID, offs_t offset, UINT8 data);

void ym3526_set_mute_mask(UINT8 ChipID, UINT32 MuteMask);

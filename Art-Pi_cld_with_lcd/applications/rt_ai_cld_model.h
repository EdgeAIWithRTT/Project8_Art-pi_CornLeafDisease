#ifndef __RT_AI_CLD_MODEL_H
#define __RT_AI_CLD_MODEL_H

/* model info ... */

// model name
#define RT_AI_CLD_MODEL_NAME			"cld"

#define RT_AI_CLD_WORK_BUFFER_BYTES		(216448)

#define AI_CLD_DATA_WEIGHTS_SIZE		(32280)

#define RT_AI_CLD_BUFFER_ALIGNMENT		(4)

#define RT_AI_CLD_IN_NUM				(1)

#define RT_AI_CLD_IN_SIZE_BYTES	{	\
	((112 * 112 * 3) * 1),	\
}
#define RT_AI_CLD_IN_1_SIZE			(112 * 112 * 3)
#define RT_AI_CLD_IN_1_SIZE_BYTES		((112 * 112 * 3) * 1)
#define RT_AI_CLD_IN_TOTAL_SIZE_BYTES		((112 * 112 * 3) * 1)



#define RT_AI_CLD_OUT_NUM				(1)

#define RT_AI_CLD_OUT_SIZE_BYTES	{	\
	((1 * 1 * 4) * 1),	\
}
#define RT_AI_CLD_OUT_1_SIZE			(1 * 1 * 4)
#define RT_AI_CLD_OUT_1_SIZE_BYTES		((1 * 1 * 4) * 1)
#define RT_AI_CLD_OUT_TOTAL_SIZE_BYTES		((1 * 1 * 4) * 1)




#define RT_AI_CLD_TOTAL_BUFFER_SIZE		//unused

#endif	//end
